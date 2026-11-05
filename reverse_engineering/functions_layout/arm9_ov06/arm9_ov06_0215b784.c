
void FUN_0215b784(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined8 uVar4;
  
  bVar1 = *(byte *)(param_1 + 0x118);
  *(byte *)(param_1 + 0x118) = bVar1 + 1;
  if ((bVar1 & 7) == 5) {
    uVar4 = FUN_0215b62c(*(undefined4 *)(param_1 + 0x1a8));
    uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20);
    bVar3 = (int)uVar4 == 0;
    if (bVar3) {
      uVar2 = 1;
    }
    if (!bVar3) {
      uVar2 = 0;
    }
    FUN_02083950(*(undefined4 *)(param_1 + 0x1a8),uVar2);
  }
  FUN_0215b4fc(param_1);
  return;
}

