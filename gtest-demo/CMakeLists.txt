FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
	square_root_app
	square_root_app.c
	square_root.c)

add_executable(
	square_root_tests
	square_root_tests.cc
	square_root.c)

target_link_libraries(square_root_tests 
	gtest_main
       	-lpthread 
	-lm)

add_executable(
	countbits_app
	countbits_app.c
	countbits.c)

add_executable(
	countbits_tests
	countbits_tests.cc
	countbits.c)

target_link_libraries(countbits_tests 
	gtestmain
	-lpthread
	-lm)

include(GoogleTest)
