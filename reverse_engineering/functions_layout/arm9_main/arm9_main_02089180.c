
void FUN_02089180(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  
                    /* JUS-TAG strings=["CommLib.cpp","WH_StateInEndParent"] */
  if (*(short *)(param_1 + 2) != 0) {
    FUN_02088904(*(short *)(param_1 + 2),s_CommLib_cpp_020a0338,0x398,param_4,param_4);
    FUN_02089044();
    return;
  }
  iVar2 = FUN_02059208(0x2089159);
  if (iVar2 == 3) {
    DAT_0214bea4 = 2;
    if (DAT_0214be8c != (code *)0x0) {
      (*DAT_0214be8c)(s__s___ILLEGAL_STATE__>_COMM_LIB_S_020a0458,s_WH_StateInEndParent_020a02a0);
    }
  }
  else if (iVar2 != 2) {
    FUN_02088904(iVar2,s_CommLib_cpp_020a0338,0x385);
    bVar1 = false;
    goto LAB_020891c8;
  }
  bVar1 = true;
LAB_020891c8:
  if (!bVar1) {
    if (DAT_0214be8c != (code *)0x0) {
      (*DAT_0214be8c)(s_WH_StateInEndParent_failed_020a0484);
    }
    FUN_02089044();
  }
  return;
}

