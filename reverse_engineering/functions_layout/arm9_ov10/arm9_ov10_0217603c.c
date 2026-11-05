
void FUN_0217603c(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  
  local_20 = 0;
  local_1f = 0;
  local_1e = 0;
  local_1d = 0;
  local_1c = 0;
  local_1b = 0;
  local_1a = 0;
  local_19 = 0;
  local_18 = 0;
  local_17 = 0;
  local_16 = 0;
  local_15 = 0;
  iVar3 = param_2[2];
  iVar1 = FUN_02178004();
  if (iVar1 == 0) {
    uVar2 = FUN_02004b04(&DAT_021a4ad0);
    iVar1 = FUN_020024cc(iVar3,&DAT_021a4ad0,uVar2);
    if (iVar1 == 0) {
      iVar1 = FUN_02004b04(&DAT_021a4ad0);
      iVar3 = iVar3 + iVar1;
      iVar1 = FUN_02004d14(iVar3,0x76);
      uVar4 = iVar1 - iVar3;
      FUN_02004b94(&local_20,iVar3,uVar4);
      if ((uVar4 < 0xb) && (iVar1 = FUN_02005e3c(&local_20,0,10), iVar1 == 3)) {
        iVar3 = iVar3 + uVar4 + 1;
        uVar2 = FUN_02004b04(&DAT_021a4ad8);
        iVar1 = FUN_020024cc(iVar3,&DAT_021a4ad8,uVar2);
        if (iVar1 == 0) {
          if (*(int *)(DAT_021a7410 + 0x24) != 5) {
            if (*(int *)(DAT_021a7410 + 0x24) != 6) {
              return;
            }
            if ((*(char *)(DAT_021a7410 + 0x369) != '\x02') &&
               (*(char *)(DAT_021a7410 + 0x369) != '\x03')) {
              return;
            }
          }
          iVar1 = FUN_02004b04(&DAT_021a4ad8);
          FUN_0217d1d0(param_1,*param_2,iVar3 + iVar1);
        }
      }
    }
  }
  return;
}

