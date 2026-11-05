
undefined4 FUN_0217432c(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  
  uVar5 = *(undefined4 *)(param_1 + 0x1a04);
  iVar2 = FUN_02004d40(uVar5,&DAT_021a39b4);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = FUN_02004d40(uVar5,&DAT_021a39b4);
  FUN_02053ed0(param_1 + 0x1a14);
  *(int *)(param_1 + 0x1a30) = *(int *)(param_1 + 0x1a08) - (iVar2 + 4);
  FUN_02053e60(param_1 + 0x1a14);
  iVar2 = FUN_02004d40(*(undefined4 *)(param_1 + 0x1a04),s_Content_Length__021a3b6c);
  if (iVar2 == 0) {
    return 1;
  }
  iVar3 = FUN_02004b04(s_Content_Length__021a3b6c);
  puVar4 = (undefined1 *)FUN_02004d40(iVar2 + iVar3,&DAT_021a39d0);
  uVar1 = *puVar4;
  *puVar4 = 0;
  FUN_02053ed0(param_1 + 0x1a14);
  uVar5 = FUN_02005f14(iVar2 + iVar3);
  *(undefined4 *)(param_1 + 0x1a2c) = uVar5;
  FUN_02053e60(param_1 + 0x1a14);
  *puVar4 = uVar1;
  return 1;
}

