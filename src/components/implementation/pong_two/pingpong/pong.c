#include <cos_component.h>
#include <cos_kernel_api.h>
#include <llprint.h>
#include <pong_two.h>
#include <cos_debug.h>
#include <cos_types.h>
#include <hypercall.h>

void
call(void)
{
	printc("In call() in pong interface\n");
	return;
}

void
call_two(void)
{
	printc("In call_two() in pong interface. \n");
	return;
}

void
call_three(void)
{
	printc("In call_three() in pong interface. \n");
	return;
}

void
call_four(void)
{
	printc("In call_four() in pong interface. \n");
	return;
}

void
call_arg(int p1)
{
	printc("In call_arg() in pong interface. arg: %d\n", p1);
	return;
}

void
call_args(int p1, int p2, int p3, int p4)
{
	printc("In call_args() in pong interface.\n p1:%d p2:%d p3:%d p4:%d \n", p1, p2, p3, p4);
	return;
}

void
call_3rets(int *r2, int *r3, int p1, int p2, int p3, int p4)
{
	printc("In call_3rets() in pong interface.\n p1:%d p2:%d p3:%d p4:%d \n", p1, p2, p3, p4);
	*r2 = p1 - p2 - p3 - p4;
	*r3 = p1 + p2 + p3 + p4;
	return;
}

void
cos_init(void)
{
	int ret;

	printc("Welcome to the pong component\n");

	hypercall_comp_init_done();
	while (1) ;
}
