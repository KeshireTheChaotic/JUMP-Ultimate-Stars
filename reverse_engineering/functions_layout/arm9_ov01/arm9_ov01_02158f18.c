
void FUN_02158f18(undefined4 param_1)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
                    /* JUS-TAG source_file_inferred="DeckSelect.cpp" */
  iVar1 = FUN_0203b3f4();
  iVar1 = FUN_02158ca4(0x880005,0x880000,*(undefined4 *)(iVar1 + 0x88),0x62);
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x54) = 0x31305053;
  local_14 = 0xa000;
  local_10 = 0xfffd4000;
  FUN_021511c8(iVar1,&local_10,&local_14);
  FUN_0214f7c0(iVar1,param_1);
  FUN_0214e688(param_1,iVar1);
  local_18 = 0x2000;
  FUN_0214e6c0(param_1,&local_18);
  return;
}

