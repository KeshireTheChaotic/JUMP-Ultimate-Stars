
undefined4 FUN_02010adc(undefined4 param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar5 = 0;
  while( true ) {
    if (DAT_020a1544 <= uVar5) {
      local_20 = DAT_020a1e00;
      local_1c = 0;
      piVar2 = (int *)FUN_02010644(&local_20,param_2 | 0x43000000);
      if (piVar2 == (int *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_02010990(param_1,piVar2);
        (**(code **)(*piVar2 + 0xc))();
      }
      return uVar3;
    }
    puVar4 = (undefined4 *)(uVar5 * DAT_020a1540 + DAT_020a153c);
    if ((((uint)puVar4[2] <= param_2) && (param_2 < (uint)(puVar4[2] + puVar4[3]))) &&
       (iVar1 = (*(code *)*puVar4)(param_2,puVar4[1]), iVar1 != 0)) break;
    uVar5 = uVar5 + 1;
  }
  return *(undefined4 *)(iVar1 + 4);
}

