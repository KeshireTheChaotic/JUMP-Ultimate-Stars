
void FUN_0206b264(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_18;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  local_18 = param_4;
  for (iVar3 = 0; iVar3 < (int)(uint)*(byte *)(iVar2 + 0x10); iVar3 = iVar3 + 1) {
    uVar1 = FUN_0206b8b0(*(undefined2 *)(*(int *)(iVar2 + 8) + iVar3 * 2),
                         *(undefined2 *)(iVar2 + 0x16),*(undefined1 *)(iVar2 + 0x11),
                         *(undefined1 *)(iVar2 + 0x18));
    local_18 = CONCAT22(local_18._2_2_,uVar1);
    FUN_02029c68(*(undefined4 *)(*(int *)(iVar2 + 4) + 4),&local_18,
                 (uint)*(ushort *)(iVar2 + 0xe) + iVar3,1);
  }
  if (*(byte *)(iVar2 + 0x11) < *(byte *)(iVar2 + 0x18)) {
    if (*(byte *)(iVar2 + 0x11) == 0) {
      *(undefined1 *)(iVar2 + 0x19) = 1;
    }
  }
  else {
    *(undefined1 *)(iVar2 + 0x19) = 0xff;
  }
  *(char *)(iVar2 + 0x11) = *(char *)(iVar2 + 0x11) + *(char *)(iVar2 + 0x19);
  return;
}

