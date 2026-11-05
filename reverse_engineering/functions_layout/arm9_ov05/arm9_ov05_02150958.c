
int FUN_02150958(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = (int *)thunk_FUN_0201a228(0x70,s_ALCollision_inl_0216f8b4,s_Create_0216f424,0x1b2,param_4
                                    );
  if (piVar1 != (int *)0x0) {
    func_0x021b054c(piVar1,param_1,param_3);
    *piVar1 = (int)&jus_Class_0216f578::vftable;
    FUN_021509e4(piVar1 + 0x1a,param_2);
    *piVar1 = 0x21d1c58;
  }
  if (piVar1[6] == 0) {
    (**(code **)(*piVar1 + 0x14))();
  }
  return piVar1[6];
}

