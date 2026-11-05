
undefined4 FUN_021745e0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  
  pcVar3 = (code *)param_2[3];
  FUN_020517fc(param_1,0,0x1c10);
  *(undefined4 *)(param_1 + 0x1a2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1a30) = 0xffffffff;
  uVar2 = param_2[1];
  *(undefined4 *)(param_1 + 0x1004) = *param_2;
  *(undefined4 *)(param_1 + 0x1008) = uVar2;
  uVar2 = param_2[3];
  *(undefined4 *)(param_1 + 0x100c) = param_2[2];
  *(undefined4 *)(param_1 + 0x1010) = uVar2;
  uVar2 = param_2[5];
  *(undefined4 *)(param_1 + 0x1014) = param_2[4];
  *(undefined4 *)(param_1 + 0x1018) = uVar2;
  *(undefined4 *)(param_1 + 0x101c) = param_2[6];
  iVar1 = (*pcVar3)(s_ALLOC_http_>lowrecvbuf_021a3ba8,0xb68);
  *(int *)(param_1 + 0x19c8) = iVar1;
  if (*(int *)(param_1 + 0x19c8) == 0) {
    *(undefined4 *)(param_1 + 0x1020) = 1;
    return 1;
  }
  iVar1 = (*pcVar3)(s_ALLOC_http_>lowsendbuf_021a3bc0,0x5ea);
  *(int *)(param_1 + 0x19cc) = iVar1;
  if (*(int *)(param_1 + 0x19cc) == 0) {
    *(undefined4 *)(param_1 + 0x1020) = 1;
    return 1;
  }
  iVar1 = FUN_02173db8(param_1,param_1 + 0x1a04,*(undefined4 *)(param_1 + 0x100c));
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x1020) = 1;
    return 1;
  }
  iVar1 = FUN_02173c20(param_1,*param_2);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x1020) = 1;
    return 1;
  }
  iVar1 = FUN_02173fcc(param_1);
  *(int *)(param_1 + 0x1020) = iVar1;
  if (*(int *)(param_1 + 0x1020) == 0) {
    *(undefined1 *)(param_1 + 0x1000) = 0xff;
  }
  return *(undefined4 *)(param_1 + 0x1020);
}

