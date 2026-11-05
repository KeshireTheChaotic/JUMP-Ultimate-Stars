
int FUN_021b9588(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = (int *)jus_AllocDebug(0x70,s_ALCollision_inl_021d3c40,s_Create_021d3b48,0x1b2,param_4);
  if (piVar1 != (int *)0x0) {
    jus_Class_021d1be8::jus_Class_021d1be8(piVar1,param_1,param_3);
    *piVar1 = (int)&ALCollision_021d0a1c::vftable;
    FUN_021ac9b0(piVar1 + 0x1a,param_2);
    *piVar1 = (int)&ALCollisionImp::vftable;
  }
  if (piVar1[6] == 0) {
    (**(code **)(*piVar1 + 0x14))();
  }
  return piVar1[6];
}

