
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ff8f80(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
                    /* JUS-TAG hw={"IPC_PXI":1,"SYSTEM_SHARED":3,"IRQ":1}
                       io=["027ffd9c","027ffe24","027fff80","04000180","04000208"] */
  uVar1 = _DAT_027ffd9c;
  _DAT_04000208 = 0x4000000;
  _DAT_027c3ffc = 0;
  do {
  } while ((_DAT_04000180 & 0xf) != 1);
  _DAT_04000180 = 0x100;
  puVar3 = (undefined4 *)&DAT_027ffd9c;
  uVar2 = FUN_01ff9030(0,0x27ffd80,0x80);
  *puVar3 = uVar1;
  FUN_01ff9030(uVar2,&DAT_027fff80,0x80);
  do {
  } while ((_DAT_04000180 & 0xf) == 1);
  _DAT_04000180 = 0;
                    /* WARNING: Could not recover jumptable at 0x01ff9014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_027ffe24)(_DAT_027fff80,_DAT_027fff84,_DAT_027fff88,_DAT_027fff8c);
  return;
}

