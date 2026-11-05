
/* JUS-SDK OS_Halt [exact] instruction template OS_Halt */

undefined4 OS_Halt(void)

{
  coproc_moveto_Wait_for_interrupt(0);
  return 0;
}

