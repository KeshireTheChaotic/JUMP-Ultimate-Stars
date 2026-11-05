
undefined4 FUN_02161380(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x20) + 0xc) + 0x24);
  if (param_2 < *(int *)(iVar3 + 0x41c)) {
    return 0;
  }
  if (*(int *)(iVar3 + 0x41c) + 0x20 <= param_2) {
    return 0;
  }
  iVar2 = param_2 >> 0x1f;
  uVar1 = 1 << (((uint)(param_2 * 0x8000000 + iVar2) >> 0x1b | iVar2 << 5) - iVar2 & 0xff);
  if ((*(uint *)(iVar3 + 0x418) & uVar1) != 0) {
    return 0;
  }
  *(uint *)(iVar3 + 0x418) = *(uint *)(iVar3 + 0x418) | uVar1;
  iVar2 = *(int *)(iVar3 + 0x41c) >> 0x1f;
  if ((*(uint *)(iVar3 + 0x418) &
      1 << (((uint)(*(int *)(iVar3 + 0x41c) * 0x8000000 + iVar2) >> 0x1b | iVar2 << 5) - iVar2 &
           0xff)) != 0) {
    do {
      iVar4 = *(int *)(iVar3 + 0x41c);
      iVar2 = iVar4 >> 0x1f;
      *(int *)(iVar3 + 0x41c) = *(int *)(iVar3 + 0x41c) + 1;
      *(uint *)(iVar3 + 0x418) =
           *(uint *)(iVar3 + 0x418) &
           ~(1 << (((uint)(iVar4 * 0x8000000 + iVar2) >> 0x1b | iVar2 << 5) - iVar2 & 0xff));
      iVar2 = *(int *)(iVar3 + 0x41c) >> 0x1f;
    } while ((*(uint *)(iVar3 + 0x418) &
             1 << (((uint)(*(int *)(iVar3 + 0x41c) * 0x8000000 + iVar2) >> 0x1b | iVar2 << 5) -
                   iVar2 & 0xff)) != 0);
  }
  return 1;
}

