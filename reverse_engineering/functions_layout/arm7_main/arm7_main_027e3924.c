
void FUN_027e3924(undefined2 param_1,undefined2 param_2,int param_3)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)FUN_03808074();
  if (param_3 == 0) {
    *puVar1 = 10;
  }
  else {
    *puVar1 = 0x26;
  }
  puVar1[1] = 1;
  puVar1[4] = 4;
  puVar1[2] = param_1;
  puVar1[3] = param_2;
  FUN_038080d0();
  return;
}

