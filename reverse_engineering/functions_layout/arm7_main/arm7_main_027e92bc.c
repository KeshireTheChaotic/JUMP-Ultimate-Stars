
uint FUN_027e92bc(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (uint)*(ushort *)(&DAT_027f7d24 + (param_2 & 0xf) * 2) ^ (int)param_2 >> 4 & 0xfffU ^
          (uint)*(ushort *)(&DAT_027f7d24 + (param_1 & 0xf) * 2);
  return (uint)*(ushort *)(&DAT_027f7d24 + (uVar1 & 0xf) * 2) ^ (int)uVar1 >> 4 ^
         (uint)*(ushort *)(&DAT_027f7d24 + ((int)param_1 >> 4 & 0xfU) * 2);
}

