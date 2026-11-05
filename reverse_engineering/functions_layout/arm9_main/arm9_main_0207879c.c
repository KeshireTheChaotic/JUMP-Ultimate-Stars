
byte FUN_0207879c(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  byte bVar3;
  
  bVar1 = false;
  bVar3 = *(char *)(param_1 + 0x5e0) == '\0';
  puVar2 = *(undefined4 **)(param_1 + 0x558);
  if (*(char *)(param_1 + 0x5e1) == '\0') {
    bVar3 = bVar3 | 2;
  }
  if (*(char *)(param_1 + 0x5e2) == '\0') {
    bVar3 = bVar3 | 4;
  }
  for (; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
    if ((*(char *)(puVar2 + 0x10) == '\0') && ((*(byte *)((int)puVar2 + 0xf) & 0x10) != 0)) {
      bVar1 = true;
    }
  }
  if (!bVar1) {
    bVar3 = bVar3 | 0x10;
  }
  return bVar3;
}

