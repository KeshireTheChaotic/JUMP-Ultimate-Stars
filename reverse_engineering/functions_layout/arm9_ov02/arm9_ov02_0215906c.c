
undefined4 FUN_0215906c(int param_1,int param_2,short param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_10;
  
  uVar4 = (uint)*(byte *)(param_1 + 4);
  iVar3 = param_3 * 0x4dc + param_2 + 0x20;
  local_10 = param_4;
  if ((&DAT_0215c98c)[uVar4] == '\0') {
    uVar4 = uVar4 - 4 & 0xff;
    (**(code **)(**(int **)(iVar3 + uVar4 * 4 + 0x1d0) + 8))();
    *(undefined4 *)(iVar3 + uVar4 * 4 + 0x1d0) = 0;
  }
  else {
    piVar2 = *(int **)(*(int *)(iVar3 + uVar4 * 4 + 0x1c0) + 4);
    (**(code **)(*piVar2 + 0xd8))(piVar2,0);
    (**(code **)(**(int **)(iVar3 + (uint)*(byte *)(param_1 + 4) * 4 + 0x1c0) + 8))();
    *(undefined4 *)(iVar3 + (uint)*(byte *)(param_1 + 4) * 4 + 0x1c0) = 0;
    iVar1 = (short)(ushort)*(byte *)(param_1 + 4) * 0x1c;
    if (*(int *)(iVar3 + 4 + iVar1) != 0) {
      *(undefined4 *)(iVar3 + 4 + iVar1) = 0;
    }
    iVar1 = (short)(ushort)*(byte *)(param_1 + 4) * 0xc;
    if (*(int *)(iVar3 + 0x18c + iVar1) != 0) {
      *(undefined4 *)(iVar3 + 0x18c + iVar1) = 0;
    }
    local_10 = 0x3000;
    piVar2 = *(int **)(*(int *)(iVar3 + (uint)*(byte *)(param_1 + 4) * 4 + 0x2f8) + 4);
    (**(code **)(*piVar2 + 0x10))(piVar2,&local_10);
    *(undefined4 *)(iVar3 + (uint)*(byte *)(param_1 + 4) * 4 + 0x2f8) = 0;
    *(byte *)(iVar3 + 0x4d3) =
         *(byte *)(iVar3 + 0x4d3) |
         (byte)(1 << (uint)*(byte *)(iVar3 + (uint)*(byte *)(param_1 + 4) + 0x350));
    *(undefined1 *)(iVar3 + (uint)*(byte *)(param_1 + 4) + 0x350) = 0xff;
  }
  return 0;
}

