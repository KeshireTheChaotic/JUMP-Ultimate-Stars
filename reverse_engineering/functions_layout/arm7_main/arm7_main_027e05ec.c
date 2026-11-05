
void FUN_027e05ec(undefined4 param_1,undefined2 *param_2,int param_3)

{
  int iVar1;
  undefined2 *puVar2;
  
  if (((param_3 == 0) && (iVar1 = FUN_037fcc6c(&DAT_027f8328,param_2,0), iVar1 == 0)) &&
     (DAT_027f97ec != 0)) {
    puVar2 = (undefined2 *)FUN_03808074();
    *puVar2 = *param_2;
    puVar2[1] = 8;
    puVar2[2] = 0;
    puVar2[3] = 0;
    FUN_038080d0();
  }
  return;
}

