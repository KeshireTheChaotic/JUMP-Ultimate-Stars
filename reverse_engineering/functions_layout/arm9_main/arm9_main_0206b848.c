
void FUN_0206b848(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 local_18;
  
  local_18 = param_4;
  for (iVar2 = 0; iVar2 < (int)(uint)*(byte *)(param_1 + 0x10); iVar2 = iVar2 + 1) {
    uVar1 = FUN_0206b8b0(*(undefined2 *)(*(int *)(param_1 + 8) + iVar2 * 2),
                         *(undefined2 *)(param_1 + 0x16),*(undefined1 *)(param_1 + 0x11),
                         *(undefined1 *)(param_1 + 0x18));
    local_18 = CONCAT22(local_18._2_2_,uVar1);
    FUN_02029c68(*(undefined4 *)(*(int *)(param_1 + 4) + 4),&local_18,
                 (uint)*(ushort *)(param_1 + 0xe) + iVar2,1);
  }
  return;
}

