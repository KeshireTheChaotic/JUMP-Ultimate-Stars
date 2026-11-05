
/* JUS-GAME CommuMenuWiFiError::CommuMenuWiFiError_Add [source-string]
   __FILE__="CommuMenuWiFiError.cpp" __FUNCTION__="CommuMenuWiFiError_Add" lines=[94] passed to 1
   source-location call(s) */

int CommuMenuWiFiError::CommuMenuWiFiError_Add(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)thunk_FUN_0201a228(0x98,s_CommuMenuWiFiError_cpp_0216ab2c,
                                     s_CommuMenuWiFiError_Add_0216ab14,0x5e);
  FUN_020517fc(piVar1,0,0x98);
  iVar2 = FUN_020310f4();
  *piVar1 = iVar2;
  DAT_02093c04 = DAT_02093c04 + -1;
  *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4) = DAT_020a0e80;
  FUN_020314a0(*(undefined4 *)(iVar2 + 4));
  CommuMenuCommon::CMMenuCmn_PackArc_InitLoad(*piVar1);
  func_0x021b65bc();
  FUN_02150678(0,0,0,1);
  iVar2 = func_0x0219a9cc();
  if (iVar2 == 7) {
    FUN_0206dcdc(0);
  }
  else {
    iVar2 = FUN_0203b414(3);
    iVar2 = CommuMenuCommon::CMMenuCmn_BaseBG_Create(*(undefined4 *)(iVar2 + 0x88));
    piVar1[3] = iVar2;
    iVar2 = FUN_0203b424(3);
    iVar2 = CommuMenuCommon::CMMenuCmn_BaseBG_Create(*(undefined4 *)(iVar2 + 0x88));
    piVar1[4] = iVar2;
    iVar2 = FUN_0203b404();
    FUN_02150e14(*(undefined4 *)(iVar2 + 0x88));
  }
  iVar2 = func_0x021ba49c(0,1,1);
  piVar1[2] = iVar2;
  FUN_02073ebc(2,1);
  iVar2 = FUN_02026f94();
  piVar1[1] = iVar2;
  (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),piVar1);
  FUN_02028384(*(undefined4 *)(piVar1[1] + 4),FUN_021650bc);
  return *piVar1;
}

