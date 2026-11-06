
/* JUS-SDK MIi_CheckAnotherAutoDMA [behavioral] loops over the other DMA channels and compares their
   timing field (bits 27-29); panics on a clash */

void MIi_CheckAnotherAutoDMA(int param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
                    /* JUS-TAG hw={"DMA":1} io=["040000b8"] */
  puVar2 = (uint *)&DAT_040000b8;
  iVar3 = 0;
  do {
    if (((((iVar3 != param_1) && ((*puVar2 & 0x80000000) != 0)) &&
         (uVar1 = *puVar2 & 0x38000000, uVar1 != param_2)) &&
        (((uVar1 != 0x8000000 || (param_2 != 0x10000000)) &&
         ((uVar1 != 0x10000000 || (param_2 != 0x8000000)))))) &&
       ((((uVar1 == 0x18000000 || (uVar1 == 0x20000000)) ||
         ((uVar1 == 0x28000000 ||
          (((uVar1 == 0x30000000 || (uVar1 == 0x38000000)) || (uVar1 == 0x8000000)))))) ||
        (uVar1 == 0x10000000)))) {
      FUN_02055684();
    }
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 3;
  } while (iVar3 < 3);
  return;
}

