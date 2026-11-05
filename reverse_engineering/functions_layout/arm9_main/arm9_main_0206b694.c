
void FUN_0206b694(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined2 local_20 [2];
  undefined4 uStack_1c;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  uStack_1c = param_4;
  for (iVar3 = 0; iVar3 < (int)(uint)*(byte *)(iVar2 + 0x10); iVar3 = iVar3 + 1) {
    local_20[0] = FUN_0206b8b0(*(undefined2 *)(*(int *)(iVar2 + 8) + iVar3 * 2),
                               *(undefined2 *)(iVar2 + 0x16),*(undefined1 *)(iVar2 + 0x11),
                               *(undefined1 *)(iVar2 + 0x18));
    FUN_02029c68(*(undefined4 *)(*(int *)(iVar2 + 4) + 4),local_20,
                 (uint)*(ushort *)(iVar2 + 0xe) + iVar3,1);
  }
  if (*(byte *)(iVar2 + 0x11) < *(byte *)(iVar2 + 0x18)) {
    if (*(byte *)(iVar2 + 0x11) == 0) {
      if ((*(char *)(iVar2 + 0x19) == -1) &&
         (bVar1 = *(char *)(iVar2 + 0x1a) + 1, *(byte *)(iVar2 + 0x1a) = bVar1,
         *(byte *)(iVar2 + 0x1b) <= bVar1)) {
        FUN_020282f4(*(undefined4 *)(param_1 + 4));
      }
      *(undefined1 *)(iVar2 + 0x19) = 1;
    }
  }
  else {
    *(undefined1 *)(iVar2 + 0x19) = 0xff;
  }
  *(char *)(iVar2 + 0x11) = *(char *)(iVar2 + 0x11) + *(char *)(iVar2 + 0x19);
  return;
}

