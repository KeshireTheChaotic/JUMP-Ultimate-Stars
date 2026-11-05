
undefined4 FUN_02181744(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = param_2;
  uVar1 = FUN_0217fb7c();
  puVar2 = (undefined4 *)FUN_020014e4(uVar1,&local_18);
  if (puVar2 == (undefined4 *)0x0) {
    local_18 = FUN_02001e9c(param_2);
    local_14 = 1;
    uVar1 = FUN_0217fb7c(param_1);
    FUN_0200159c(uVar1,&local_18);
    return local_18;
  }
  puVar2[1] = puVar2[1] + 1;
  return *puVar2;
}

