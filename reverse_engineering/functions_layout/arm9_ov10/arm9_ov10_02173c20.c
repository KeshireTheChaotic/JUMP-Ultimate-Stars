
undefined4 FUN_02173c20(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  
  puVar6 = (undefined1 *)0x0;
  uVar2 = FUN_02004b04(param_2);
  if (0xff < uVar2) {
    return 0;
  }
  FUN_02004b94(param_1 + 0x1024,param_2);
  iVar3 = FUN_02004b04(param_2);
  iVar4 = FUN_02004b04(param_1 + 0x1024);
  if (iVar3 != iVar4) {
    return 0;
  }
  iVar3 = FUN_02004d40(param_1 + 0x1024,s_http____021a3a58);
  if (iVar3 == 0) {
    iVar3 = FUN_02004d40(param_1 + 0x1024,s_https____021a3a60);
    if (iVar3 == 0) {
      return 0;
    }
    *(int *)(param_1 + 0x1124) = iVar3 + 8;
    *(undefined4 *)(param_1 + 0x112c) = 1;
    *(undefined2 *)(param_1 + 0x1130) = 0x1bb;
  }
  else {
    *(int *)(param_1 + 0x1124) = param_1 + 0x102b;
    *(undefined4 *)(param_1 + 0x112c) = 0;
    *(undefined2 *)(param_1 + 0x1130) = 0x50;
  }
  puVar5 = (undefined1 *)FUN_02004d40(*(undefined4 *)(param_1 + 0x1124),&DAT_021a3a6c);
  if (puVar5 != (undefined1 *)0x0) {
    puVar6 = puVar5 + 1;
    *puVar5 = 0;
  }
  puVar5 = (undefined1 *)FUN_02004d40(*(undefined4 *)(param_1 + 0x1124),&DAT_021a3a70);
  if (puVar5 == (undefined1 *)0x0) {
    *(undefined4 *)(param_1 + 0x1128) = 0;
  }
  else {
    *puVar5 = 0;
    *(undefined1 **)(param_1 + 0x1128) = puVar5 + 1;
  }
  if (puVar6 != (undefined1 *)0x0) {
    uVar1 = FUN_02005f14(puVar6);
    *(undefined2 *)(param_1 + 0x1130) = uVar1;
  }
  return 1;
}

