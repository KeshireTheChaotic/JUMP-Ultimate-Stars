
void FUN_02154750(undefined4 param_1,code *param_2)

{
  undefined4 uVar1;
  undefined4 local_10;
  
  uVar1 = FUN_0215477c();
  uVar1 = FUN_021658c4(uVar1,&local_10,4);
  DC_FlushRange(uVar1,local_10);
  (*param_2)(uVar1,0,local_10);
  FUN_0216589c(uVar1);
  return;
}

