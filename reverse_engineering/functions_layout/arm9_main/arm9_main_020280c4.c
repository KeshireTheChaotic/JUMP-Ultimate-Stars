
void FUN_020280c4(int *param_1)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)(param_1 + 10);
  uVar2 = (uint)bVar1;
  if ((uVar2 & 0x1f) >> 4 == 0) {
    if ((((char)bVar1 < '\0') || ((uVar2 & 3) >> 1 != 0)) ||
       (((*(byte *)((int)param_1 + 0x29) & 3) >> 1 != 0 ||
        ((*(uint *)(param_1[0xd] + 0x248) & (param_1[0xf] & 0x7fffffffU | 0x80000000)) == 0)))) {
      if ((*(byte *)(param_1 + 10) & 1) != 0) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      }
      return;
    }
    if (((uVar2 & 0xf) >> 3 != 0) || ((uVar2 & 7) >> 2 != 0)) {
      (**(code **)(*param_1 + 0x58))();
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe | 1;
      return;
    }
    if ((uVar2 & 1) != 1) {
      *(byte *)(param_1 + 10) = bVar1 & 0xfe | 1;
    }
    return;
  }
  if ((((((uVar2 & 0xf) >> 3 == 0) && ((uVar2 & 7) >> 2 == 0)) ||
       ((*(byte *)(param_1 + 10) & 3) >> 1 != 0)) ||
      (((char)*(byte *)(param_1 + 10) < '\0' || ((*(byte *)((int)param_1 + 0x29) & 3) >> 1 != 0))))
     || ((*(uint *)(param_1[0xd] + 0x248) & (param_1[0xf] & 0x7fffffffU | 0x80000000)) == 0)) {
    (**(code **)(*param_1 + 0x5c))();
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    return;
  }
  return;
}

