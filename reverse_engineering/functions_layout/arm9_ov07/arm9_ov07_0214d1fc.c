
void FUN_0214d1fc(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  
  puVar1 = &DAT_0216ace0;
  puVar2 = (undefined4 *)(uint)DAT_0216ace8;
  bVar3 = puVar2 == (undefined4 *)0x4;
  if (bVar3) {
    puVar2 = (undefined4 *)(uint)DAT_0216acea;
    puVar1 = (undefined4 *)(uint)DAT_0216acf4;
  }
  if (bVar3 && puVar2 == puVar1) {
    func_0x021bfe80();
    return;
  }
  return;
}

