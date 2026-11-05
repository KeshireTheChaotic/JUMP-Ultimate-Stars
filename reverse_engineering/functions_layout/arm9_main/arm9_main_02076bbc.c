
void FUN_02076bbc(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_02078aa0(param_2);
  iVar2 = 0;
  for (puVar1 = *(undefined4 **)(param_1 + 0x558); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    FUN_02051890(puVar1 + 3,param_2 + iVar2 * 4,4);
    iVar2 = iVar2 + 1;
  }
  FUN_02051890(param_1 + 0x5fe,param_2 + 0x40,0x1a);
  return;
}

