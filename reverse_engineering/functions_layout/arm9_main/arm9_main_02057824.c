
void FUN_02057824(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_02056ae0();
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    DC_StoreRange(puVar1,8);
    puVar1 = puVar2;
  }
  FUN_02056acc();
  return;
}

