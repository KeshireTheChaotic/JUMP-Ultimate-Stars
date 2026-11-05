
int FUN_0214e644(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = (int *)thunk_FUN_0201a228(0x70,FUN_021608f4,s_Create_021608bc,0x1b2,param_4);
  if (piVar1 != (int *)0x0) {
    func_0x021b054c(piVar1,param_1,param_3);
    *piVar1 = (int)&jus_Class_0216094c::vftable;
    FUN_0214e6d0(piVar1 + 0x1a,param_2);
    *piVar1 = 0x21d1c58;
  }
  if (piVar1[6] == 0) {
    (**(code **)(*piVar1 + 0x14))();
  }
  return piVar1[6];
}

