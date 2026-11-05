
/* JUS-SCENE jus_Scene42_Create [scene-map] scene table 0209e32c row 42 create; slot-1 overlay 7 */

undefined4 jus_Scene42_Create(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = thunk_FUN_0208c51c();
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)
             thunk_FUN_0201a228(0xc,s_CommuMenuError_cpp_0216ab74,s_CommuMenuError_Wrls_Add_0216ab44
                                ,0x6d);
    FUN_020517fc(puVar2,0,0xc);
    uVar3 = FUN_020310f4();
    *puVar2 = uVar3;
    FUN_02165320();
    CommuMenuCommon::CMMenuCmn_PackArc_InitLoad(*puVar2);
    iVar1 = FUN_02026f94();
    puVar2[1] = iVar1;
    FUN_02028384(*(undefined4 *)(iVar1 + 4),FUN_0216535c);
    (**(code **)(**(int **)(puVar2[1] + 4) + 0x24))(*(int **)(puVar2[1] + 4),puVar2);
    return *puVar2;
  }
  puVar2 = (undefined4 *)
           thunk_FUN_0201a228(0x10,s_CommuMenuError_cpp_0216ab74,s_CommuMenuError_WiFi_Add_0216ab5c,
                              0xa8);
  FUN_020517fc(puVar2,0,0x10);
  uVar3 = FUN_020310f4();
  *puVar2 = uVar3;
  FUN_02165320();
  CommuMenuCommon::CMMenuCmn_PackArc_InitLoad(*puVar2);
  iVar1 = FUN_02026f94();
  puVar2[1] = iVar1;
  FUN_02028384(*(undefined4 *)(iVar1 + 4),FUN_02165380);
  (**(code **)(**(int **)(puVar2[1] + 4) + 0x24))(*(int **)(puVar2[1] + 4),puVar2);
  iVar1 = func_0x0219a884();
  if (iVar1 == 0) {
    iVar1 = FUN_02087770();
    if (iVar1 == 1) {
      uVar3 = 2;
    }
    else {
      uVar3 = 3;
    }
    puVar2[2] = uVar3;
    uVar3 = CommuMenuWiFiError::CommuMenuWiFiError_Add();
    puVar2[3] = uVar3;
  }
  else {
    iVar1 = FUN_02087770();
    if (iVar1 == 1) {
      uVar3 = 4;
    }
    else {
      uVar3 = 5;
    }
    puVar2[2] = uVar3;
    func_0x0219a8c4();
  }
  return *puVar2;
}

