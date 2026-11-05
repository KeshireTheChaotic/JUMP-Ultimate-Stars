
void FUN_0207b3c0(int param_1,int param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  
  for (puVar2 = *(undefined4 **)(param_1 + 8); puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)*puVar2) {
    if (param_2 == 0) {
      bVar1 = *(byte *)(puVar2 + 6) & 0xbf;
    }
    else {
      bVar1 = *(byte *)(puVar2 + 6) | 0x40;
    }
    *(byte *)(puVar2 + 6) = bVar1;
  }
  return;
}

