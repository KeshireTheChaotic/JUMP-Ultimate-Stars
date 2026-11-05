
void FUN_021cab54(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_021caa84();
  if ((iVar1 == 0) && (puVar2 = (undefined4 *)*param_1, puVar2 != (undefined4 *)0x0)) {
    FUN_0201b268(*puVar2);
    FUN_0201b244(puVar2);
  }
  *param_1 = 0;
  return;
}

