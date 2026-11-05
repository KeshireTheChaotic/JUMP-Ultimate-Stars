
int FUN_02182954(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 *local_18 [2];
  
  *param_1 = 0;
  local_18[0] = (undefined1 *)FUN_0217583c(0x490);
  if (local_18[0] == (undefined1 *)0x0) {
    return 1;
  }
  FUN_02002488(local_18[0],0,0x490);
  *local_18[0] = 0;
  *(undefined4 *)(local_18[0] + 0x418) = 0;
  *(undefined4 *)(local_18[0] + 0x100) = 1;
  *(undefined4 *)(local_18[0] + 0x104) = 0;
  *(undefined4 *)(local_18[0] + 0x108) = 0;
  *(undefined4 *)(local_18[0] + 0x10c) = 0;
  *(undefined4 *)(local_18[0] + 0x46c) = param_2;
  *(undefined4 *)(local_18[0] + 0x470) = param_3;
  iVar1 = FUN_0218778c(local_18);
  if (iVar1 == 0) {
    FUN_02175814(local_18[0]);
    return 1;
  }
  iVar2 = 0;
  *(undefined4 *)(local_18[0] + 0x420) = 0;
  iVar1 = 0;
  do {
    *(undefined4 *)(local_18[0] + iVar1 + 0x1a4) = 0;
    *(undefined4 *)(local_18[0] + iVar1 + 0x1a8) = 0;
    iVar1 = iVar1 + 8;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  *(undefined4 *)(local_18[0] + 0x460) = 0;
  FUN_02189470(local_18,s_______________gpiInitialize_021a50b8);
  iVar1 = FUN_02182768(local_18);
  if (iVar1 == 0) {
    FUN_02001ecc();
    FUN_02001ed8();
    FUN_02003e24();
    *param_1 = local_18[0];
    return 0;
  }
  FUN_02182918(local_18);
  return iVar1;
}

