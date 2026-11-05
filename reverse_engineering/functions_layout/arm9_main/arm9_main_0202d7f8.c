
undefined4 FUN_0202d7f8(undefined4 param_1,undefined4 *param_2,char *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int local_40;
  int local_3c;
  char local_38 [16];
  undefined4 uStack_28;
  
  uVar3 = 0;
  local_38[0xf] = 0;
  uStack_28 = param_4;
  do {
    for (uVar2 = 0; uVar2 < 0xf; uVar2 = uVar2 + 1) {
      local_38[uVar2] = *param_3;
      if (*param_3 == ',' || *param_3 == '\0') {
        local_38[uVar2] = '\0';
        param_3 = param_3 + 1;
        break;
      }
      param_3 = param_3 + 1;
    }
    FUN_020383ec(&local_3c,local_38);
    local_40 = local_3c << 0x10;
    local_40 = FUN_0200d12c(local_40,0x168);
    uVar1 = FUN_0202c040(&local_40);
    uVar3 = uVar3 + 1;
    *param_2 = uVar1;
    param_2 = param_2 + 1;
    if (2 < uVar3) {
      return 0;
    }
  } while( true );
}

