
const mylib = joinpath(pwd(), "libmine.so")
function o(n::Int64, q::Vector{Float64})
    l1 = 1.
    l2 = 1.
    l3 = 1.
    l4 = 1.
    out = Vector{Float64}(undef, 2)
    ccall(
        (:o, mylib),
        Cvoid,
        (Cint, Ptr{Cdouble}, Cdouble, Cdouble, Cdouble, Cdouble, Ptr{Cdouble}),
        n, q, l1, l2, l3, l4, out
    )
    out
    # ccall(
    #     (:main, mylib),
    #     Cint,
    #     (Cvoid,),
    #     nothing
    # )
end


hoge = o(2, [1., 2.])


# function jo_3(q::Vector{Float64})
#     l1 = 1.
#     l2 = 1.
#     l3 = 1.
#     l4 = 1.
#     out = Matrix{Float64}(undef, 2, 4)
#     ccall(
#         (:jo_3, "sice_to_jl/src/jo_3.so"),
#         Cvoid,
#         (Cdouble, Cdouble, Cdouble, Ptr{Cdouble},  Ptr{Cdouble}),
#         l1, l2, l3, q, out
#     )
#     out

# end


# jo_3([1., 2.])