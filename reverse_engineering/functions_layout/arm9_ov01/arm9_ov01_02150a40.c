
int FUN_02150a40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = (int *)jus_AllocDebug(0x70,s_ALCollision_inl_0216b9b8,s_Create_0216bd34,0x1b2,param_4);
  if (piVar1 != (int *)0x0) {
    func_0x021b054c(piVar1,param_1,param_3);
    *piVar1 = (int)&jus_Class_0216ba10::vftable;
    FUN_0214dad4(piVar1 + 0x1a,param_2);
    *piVar1 = 0x21d1c58;
  }
  if (piVar1[6] == 0) {
    (**(code **)(*piVar1 + 0x14))();
  }
  return piVar1[6];
}

