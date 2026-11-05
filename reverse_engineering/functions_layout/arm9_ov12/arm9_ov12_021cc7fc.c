
void FUN_021cc7fc(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(param_1[1] + 0x10);
  *(undefined2 *)((int)puVar3 + 0x16) = 0x5a;
  *(undefined1 *)(puVar3 + 4) = *(undefined1 *)((int)puVar3 + 0xf);
  while (*(byte *)((int)puVar3 + 0xf) < 100) {
    cVar1 = FUN_0200d12c((*(byte *)(puVar3 + 4) - 100) * (int)*(short *)((int)puVar3 + 0x16),0x5a);
    *(byte *)((int)puVar3 + 0xf) = cVar1 + 100U;
    FUN_0200d12c((int)(short)(ushort)*(byte *)((int)puVar3 + 0xd) *
                 (int)(short)(ushort)(byte)(cVar1 + 100U),100);
    FUN_0207336c();
    FUN_0200d12c((int)(short)(ushort)*(byte *)((int)puVar3 + 0xe) *
                 (int)(short)(ushort)*(byte *)((int)puVar3 + 0xf),100);
    FUN_020733b8();
    *(short *)((int)puVar3 + 0x16) = *(short *)((int)puVar3 + 0x16) + -1;
    (*DAT_020a0e18)();
  }
  if (*(char *)(puVar3 + 3) != '\0') {
    FUN_0207336c(*(undefined1 *)((int)puVar3 + 0xd));
    FUN_020733b8(*(undefined1 *)((int)puVar3 + 0xe));
  }
  while( true ) {
    *(undefined1 *)((int)puVar3 + 6) = 0;
    iVar2 = FUN_020612d0(&LAB_021cc170_1,puVar3);
    if (iVar2 == 0) break;
    (*DAT_020a0e18)();
  }
  FUN_0205bdac(puVar3 + 0x1b);
  FUN_0205bff0(puVar3 + 0x1b);
  *(undefined1 *)((int)puVar3 + 0x12) = 0;
  FUN_021d0020();
  while( true ) {
    *(undefined1 *)((int)puVar3 + 6) = 0;
    iVar2 = FUN_020618d0(0,&LAB_021cc14c_1,puVar3);
    if (iVar2 == 0) break;
    (*DAT_020a0e18)();
  }
  if (puVar3[0x3c] != 0) {
    FUN_0201b268();
    puVar3[0x3c] = 0;
    puVar3[0x3b] = 0;
  }
  if (puVar3[0x32] != 0) {
    FUN_0201b268();
    puVar3[0x32] = 0;
  }
  if (puVar3[0x3a] != 0) {
    FUN_0201b268();
    puVar3[0x3a] = 0;
  }
  if (*(char *)(puVar3 + 3) != '\0') {
    FUN_0207336c(*(undefined1 *)((int)puVar3 + 0xd));
    FUN_020733b8(*(undefined1 *)((int)puVar3 + 0xe));
  }
  *puVar3 = 0;
  (**(code **)(*param_1 + 8))();
  return;
}

