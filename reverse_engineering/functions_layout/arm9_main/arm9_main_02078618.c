
void FUN_02078618(uint param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  bool bVar3;
  
  puVar2 = *(undefined4 **)(param_1 + 0x558);
  if (puVar2 == (undefined4 *)0x0) {
    return;
  }
  for (; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
    uVar1 = puVar2[0xf];
    if ((uVar1 & 0x4000) == 0) {
      bVar3 = (uVar1 & 0x2000) == 0;
      if (bVar3) {
        param_1 = (uint)*(byte *)(puVar2 + 0x10);
      }
      if ((bVar3 && param_1 == 0) && ((uVar1 & 1) == 0)) {
        param_1 = uVar1 & 0xffffefff;
        puVar2[0xf] = param_1;
      }
    }
  }
  return;
}

