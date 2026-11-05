
void FUN_0215b3b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined2 local_10;
  undefined2 local_e;
  undefined4 uStack_c;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  bVar2 = *(byte *)(iVar3 + 0xf2);
  *(byte *)(iVar3 + 0xf2) = bVar2 + 1;
  if (9 < bVar2) {
    uStack_c = param_4;
    iVar1 = FUN_02157f9c(*(undefined4 *)(iVar3 + 0x20));
    bVar2 = *(char *)(iVar3 + 0xf3) + 1;
    *(byte *)(iVar3 + 0xf3) = bVar2;
    if (3 < bVar2) {
      *(undefined1 *)(iVar3 + 0xf3) = 0;
    }
    local_10 = *(undefined2 *)(&DAT_0215d5b0 + (uint)*(byte *)(iVar3 + 0xf3) * 2);
    local_e = *(undefined2 *)(&DAT_0215d5b8 + (uint)*(byte *)(iVar3 + 0xf3) * 2);
    FUN_02029c68(*(undefined4 *)(iVar1 + 4),&local_10,0xc2,1);
    *(undefined1 *)(iVar3 + 0xf2) = 0;
  }
  return;
}

