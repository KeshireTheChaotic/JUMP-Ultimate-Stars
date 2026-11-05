
void FUN_02193864(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_2;
  uVar1 = *param_1;
  FUN_02193264(uVar1 << 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 0x18 | uVar1 >> 8 & 0xff00,
               uVar2 << 0x18 | (uVar2 & 0xff00) << 8 | uVar2 >> 0x18 | uVar2 >> 8 & 0xff00);
  return;
}

