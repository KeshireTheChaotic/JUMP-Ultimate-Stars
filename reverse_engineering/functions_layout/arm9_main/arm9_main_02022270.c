
void FUN_02022270(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  for (puVar2 = *(undefined4 **)(param_1 + 0x5c); puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)*puVar2) {
    puVar3 = puVar2 + -0x12;
    if (*(char *)(puVar2 + -10) != '\0') {
      if ((param_2 == 0) || (iVar1 = func_0x021b0c5c(puVar3), iVar1 == 0)) {
        func_0x021b0aa0(puVar3);
      }
      else {
        func_0x021b09ac(puVar3);
      }
    }
  }
  return;
}

