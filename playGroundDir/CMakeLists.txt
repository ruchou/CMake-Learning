

set(V a b c)
foreach(i ${V})
    message(${i})
endforeach()


if (TRUE AND TRUE)
    message(this is true)
endif ()