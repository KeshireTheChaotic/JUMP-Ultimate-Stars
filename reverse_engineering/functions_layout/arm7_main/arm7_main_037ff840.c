
uint FUN_037ff840(int param_1,int param_2)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = FUN_037ffb04(param_1 + 0x28);
  uVar5 = (int)uVar3 >> 0x1f;
  uVar4 = 0;
  if (uVar3 != 0) {
    cVar1 = *(char *)(param_1 + 0x28);
    if (cVar1 == '\0') {
      uVar5 = uVar5 << 6 | uVar3 >> 0x1a;
      uVar3 = uVar3 << 6;
    }
    else if (cVar1 == '\x01') {
      uVar2 = (ulonglong)uVar3;
      uVar3 = (uint)(uVar2 * 0x3c);
      uVar5 = uVar5 * 0x3c + (int)(uVar2 * 0x3c >> 0x20);
    }
    else if (cVar1 == '\x02') {
      uVar5 = uVar5 << 6 | uVar3 >> 0x1a;
      uVar3 = uVar3 << 6;
    }
    uVar4 = uVar3 >> 0xe | uVar5 << 0x12;
  }
  if (param_2 != 0) {
    FUN_037ffb54(param_1 + 0x28);
  }
  return uVar4;
}

