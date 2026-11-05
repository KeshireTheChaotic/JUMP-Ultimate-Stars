
void FUN_021593cc(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  do {
    uVar2 = 0;
    do {
      FUN_020770a8(*param_1,uVar2 & 0xff,uVar1 & 0xff);
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 5);
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 4);
  FUN_0207907c(param_1[1],*param_1);
  FUN_0215ce18(param_1);
  FUN_020797e4(param_1[1]);
  FUN_0215ae70(param_1);
  return;
}

