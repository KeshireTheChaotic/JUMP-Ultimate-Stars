
int FUN_0214f3bc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = (int *)thunk_FUN_0201a228(0x70,&DAT_02169674,s_Create_0216963c,0x1b2,param_4);
  if (piVar1 != (int *)0x0) {
    func_0x021b054c(piVar1,param_1,param_3);
    *piVar1 = (int)&jus_Class_021695c0::vftable;
    FUN_0214f448(piVar1 + 0x1a,param_2);
    *piVar1 = 0x21d1c58;
  }
  if (piVar1[6] == 0) {
    (**(code **)(*piVar1 + 0x14))();
  }
  return piVar1[6];
}

