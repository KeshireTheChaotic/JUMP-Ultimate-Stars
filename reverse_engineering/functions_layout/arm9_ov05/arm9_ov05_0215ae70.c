
void FUN_0215ae70(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_0215ae50();
  iVar3 = (int)((ulonglong)uVar5 >> 0x20);
  iVar1 = (int)uVar5;
  bVar4 = iVar1 == 0;
  if (bVar4) {
    iVar1 = *(int *)(param_1 + 0xc);
  }
  if (!bVar4 || iVar1 != 0) {
    iVar3 = 0x82001a;
  }
  iVar2 = *(int *)(param_1 + 0x4cc);
  if (bVar4 && iVar1 == 0) {
    iVar3 = 0x820019;
  }
  bVar4 = iVar2 != iVar3;
  if (bVar4) {
    *(int *)(param_1 + 0x4cc) = iVar3;
    iVar2 = *(int *)(param_1 + 0x8c);
  }
  if (bVar4 && iVar2 != 0) {
    func_0x021b3fc4(*(undefined4 *)(iVar2 + 4));
    return;
  }
  return;
}

