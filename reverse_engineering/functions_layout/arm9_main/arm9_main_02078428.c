
void FUN_02078428(int param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x558);
  if (puVar2 == (undefined4 *)0x0) {
    return;
  }
  for (; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
    if (*(char *)(puVar2 + 0x10) == '\0') {
      if (param_2 == 0) {
        *(undefined2 *)(puVar2 + 6) = 1;
      }
      else {
        uVar1 = FUN_0200d12c(*(short *)((int)puVar2 + 0x16) * param_3,100);
        *(undefined2 *)(puVar2 + 6) = uVar1;
      }
    }
  }
  return;
}

