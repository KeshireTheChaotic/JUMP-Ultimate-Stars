
void FUN_020699d4(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_410 [1028];
  
  FUN_020517fc(param_1,0,0x40);
  *param_1 = 0x40;
  param_1[7] = 0;
  param_1[9] = param_2;
  FUN_02069958(param_1 + 1);
  FUN_02069be0(param_1 + 4,0);
  FUN_02050f40(auStack_410,0xedb88320);
  uVar1 = FUN_02050e5c(auStack_410,param_1,0x3c);
  param_1[0xf] = uVar1;
  param_1[8] = param_1[8] | 1;
  return;
}

