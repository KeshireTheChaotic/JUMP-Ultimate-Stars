
void FUN_0215d33c(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  ushort local_20 [4];
  undefined2 local_18;
  
  local_20[0] = DAT_0216aaa0;
  local_20[1] = DAT_0216aab0;
  local_20[2] = DAT_0216aab0;
  local_20[3] = DAT_0216aaa8;
  local_18 = DAT_0216aaa8;
  piVar3 = (int *)(DAT_0216e794 + 0x18 + param_3 * 4);
  if (param_1 - 1U < 2) {
    iVar2 = FUN_0215ceec(param_3);
    if (iVar2 == 2) {
      piVar3 = (int *)(DAT_0216e794 + 0x2c);
    }
    else {
      piVar3 = (int *)(DAT_0216e794 + 0x30);
    }
  }
  cVar1 = *(char *)(param_2 + param_1 * 3 + 0x216aaec);
  if (cVar1 == '\0') {
    *(uint *)*piVar3 = *(uint *)*piVar3 & 0xfe00ff00 | 0x1000000;
    return;
  }
  FUN_02166014(0,cVar1,*piVar3);
  *(uint *)*piVar3 = (local_20[param_1] & 0x1ff) << 0x10 | *(uint *)*piVar3 & 0xfe00ff00;
  *(ushort *)(*piVar3 + 4) = *(ushort *)(*piVar3 + 4) & 0xf3ff | 0xc00;
  return;
}

