// Automatically generated file.

#include <stdint.h>

#define byte uint8_t
#define bool _Bool
#define CALLCONV 



#define reg byte

#define Reg uint8_t
///
/// Condition for an ARM instruction to be executed.
typedef enum {
    ///
    /// Equal.
    CONDITION_EQ = 0,
    ///
    /// Not equal.
    CONDITION_NE = 1,
    ///
    /// Unsigned higher or same.
    CONDITION_HS = 2,
    ///
    /// Unsigned lower.
    CONDITION_LO = 3,
    ///
    /// Minus / negative.
    CONDITION_MI = 4,
    ///
    /// Plus / positive or zero.
    CONDITION_PL = 5,
    ///
    /// Overflow.
    CONDITION_VS = 6,
    ///
    /// No overflow.
    CONDITION_VC = 7,
    ///
    /// Unsigned higher.
    CONDITION_HI = 8,
    ///
    /// Unsigned lower or same.
    CONDITION_LS = 9,
    ///
    /// Signed greater than or equal.
    CONDITION_GE = 10,
    ///
    /// Signed less than.
    CONDITION_LT = 11,
    ///
    /// Signed greater than.
    CONDITION_GT = 12,
    ///
    /// Signed less than or equal.
    CONDITION_LE = 13,
    ///
    /// Always (unconditional).
    CONDITION_AL = 14,
    ///
    /// Unpredictable (ARMv4 or lower).
    CONDITION_UN = 15,
    ///
    /// Carry set.
    CONDITION_CS = 2,
    ///
    /// Carry clear.
    CONDITION_CC = 3,
} Condition;

///
/// Processor mode.
typedef enum {
    ///
    /// User mode.
    MODE_USR = 16,
    ///
    /// FIQ (high-speed data transfer) mode.
    MODE_FIQ = 17,
    ///
    /// IRQ (general-purpose interrupt handling) mode.
    MODE_IRQ = 18,
    ///
    /// Supervisor mode.
    MODE_SVC = 19,
    ///
    /// Abort mode.
    MODE_ABT = 23,
    ///
    /// Undefined mode.
    MODE_UND = 27,
    ///
    /// System (privileged) mode.
    MODE_SYS = 31,
} Mode;

///
/// Kind of a shift.
typedef enum {
    ///
    /// Logical shift left.
    SHIFT_LSL = 0,
    ///
    /// Logical shift right.
    SHIFT_LSR = 1,
    ///
    /// Arithmetic shift right.
    SHIFT_ASR = 2,
    ///
    /// Rotate right.
    SHIFT_ROR = 3,
    ///
    /// Shifted right by one bit.
    SHIFT_RRX = 3,
} Shift;

///
/// Kind of a right rotation.
typedef enum {
    ///
    /// Do not rotate.
    ROTATION_NOP = 0,
    ///
    /// Rotate 8 bits to the right.
    ROTATION_ROR8 = 1,
    ///
    /// Rotate 16 bits to the right.
    ROTATION_ROR16 = 2,
    ///
    /// Rotate 24 bits to the right.
    ROTATION_ROR24 = 3,
} Rotation;

///
/// Field mask bits.
typedef enum {
    ///
    /// Control field mask bit.
    FIELDMASK_C = 1,
    ///
    /// Extension field mask bit.
    FIELDMASK_X = 2,
    ///
    /// Status field mask bit.
    FIELDMASK_S = 4,
    ///
    /// Flags field mask bit.
    FIELDMASK_F = 8,
} FieldMask;

///
/// Interrupt flags.
typedef enum {
    ///
    /// FIQ interrupt bit.
    INTERRUPTFLAGS_F = 1,
    ///
    /// IRQ interrupt bit.
    INTERRUPTFLAGS_I = 2,
    ///
    /// Imprecise data abort bit.
    INTERRUPTFLAGS_A = 4,
} InterruptFlags;

void CALLCONV adc(void** buf, Condition cond, bool i, bool s, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((((10485760 | cond) | (i << 25)) | (s << 20)) | (rn << 16)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV add(void** buf, Condition cond, bool i, bool s, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((((8388608 | cond) | (i << 25)) | (s << 20)) | (rn << 16)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV and(void** buf, Condition cond, bool i, bool s, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((((0 | cond) | (i << 25)) | (s << 20)) | (rn << 16)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV eor(void** buf, Condition cond, bool i, bool s, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((((2097152 | cond) | (i << 25)) | (s << 20)) | (rn << 16)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV orr(void** buf, Condition cond, bool i, bool s, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((((25165824 | cond) | (i << 25)) | (s << 20)) | (rn << 16)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV rsb(void** buf, Condition cond, bool i, bool s, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((((6291456 | cond) | (i << 25)) | (s << 20)) | (rn << 16)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV rsc(void** buf, Condition cond, bool i, bool s, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((((14680064 | cond) | (i << 25)) | (s << 20)) | (rn << 16)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV sbc(void** buf, Condition cond, bool i, bool s, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((((12582912 | cond) | (i << 25)) | (s << 20)) | (rn << 16)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV sub(void** buf, Condition cond, bool i, bool s, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((((4194304 | cond) | (i << 25)) | (s << 20)) | (rn << 16)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV bkpt(void** buf) {
    *(uint32_t*)(*buf) = 3776970864;
    *(byte*)buf += 4;
}

void CALLCONV b(void** buf, Condition cond) {
    *(uint32_t*)(*buf) = (167772160 | cond);
    *(byte*)buf += 4;
}

void CALLCONV bic(void** buf, Condition cond, bool i, bool s, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((((29360128 | cond) | (i << 25)) | (s << 20)) | (rn << 16)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV blx(void** buf, Condition cond) {
    *(uint32_t*)(*buf) = (19922736 | cond);
    *(byte*)buf += 4;
}

void CALLCONV bx(void** buf, Condition cond) {
    *(uint32_t*)(*buf) = (19922704 | cond);
    *(byte*)buf += 4;
}

void CALLCONV bxj(void** buf, Condition cond) {
    *(uint32_t*)(*buf) = (19922720 | cond);
    *(byte*)buf += 4;
}

void CALLCONV blxun(void** buf) {
    *(uint32_t*)(*buf) = 4194304000;
    *(byte*)buf += 4;
}

void CALLCONV cdp(void** buf, Condition cond) {
    *(uint32_t*)(*buf) = (234881024 | cond);
    *(byte*)buf += 4;
}

void CALLCONV clz(void** buf, Condition cond, Reg rd) {
    *(uint32_t*)(*buf) = ((24055568 | cond) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV cmn(void** buf, Condition cond, bool i, Reg rn) {
    *(uint32_t*)(*buf) = (((24117248 | cond) | (i << 25)) | (rn << 16));
    *(byte*)buf += 4;
}

void CALLCONV cmp(void** buf, Condition cond, bool i, Reg rn) {
    *(uint32_t*)(*buf) = (((22020096 | cond) | (i << 25)) | (rn << 16));
    *(byte*)buf += 4;
}

void CALLCONV cpy(void** buf, Condition cond, Reg rd) {
    *(uint32_t*)(*buf) = ((27262976 | cond) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV cps(void** buf, Mode mode) {
    *(uint32_t*)(*buf) = (4043440128 | (mode << 0));
    *(byte*)buf += 4;
}

void CALLCONV cpsie(void** buf, InterruptFlags iflags) {
    *(uint32_t*)(*buf) = (4043833344 | (iflags << 9));
    *(byte*)buf += 4;
}

void CALLCONV cpsid(void** buf, InterruptFlags iflags) {
    *(uint32_t*)(*buf) = (4044095488 | (iflags << 9));
    *(byte*)buf += 4;
}

void CALLCONV cpsie_mode(void** buf, InterruptFlags iflags, Mode mode) {
    *(uint32_t*)(*buf) = ((4043964416 | (iflags << 9)) | (mode << 3));
    *(byte*)buf += 4;
}

void CALLCONV cpsid_mode(void** buf, InterruptFlags iflags, Mode mode) {
    *(uint32_t*)(*buf) = ((4044226560 | (iflags << 9)) | (mode << 3));
    *(byte*)buf += 4;
}

void CALLCONV ldc(void** buf, Condition cond, bool write, Reg rn) {
    *(uint32_t*)(*buf) = (((205520896 | cond) | (write << 23)) | (rn << 18));
    *(byte*)buf += 4;
}

void CALLCONV ldm1(void** buf, Condition cond, bool write, Reg rn) {
    *(uint32_t*)(*buf) = (((138412032 | cond) | (write << 23)) | (rn << 18));
    *(byte*)buf += 4;
}

void CALLCONV ldm2(void** buf, Condition cond, Reg rn) {
    *(uint32_t*)(*buf) = ((155189248 | cond) | (rn << 18));
    *(byte*)buf += 4;
}

void CALLCONV ldm3(void** buf, Condition cond, bool write, Reg rn) {
    *(uint32_t*)(*buf) = (((155320320 | cond) | (write << 23)) | (rn << 18));
    *(byte*)buf += 4;
}

void CALLCONV ldr(void** buf, Condition cond, bool write, bool i, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((((71303168 | cond) | (write << 23)) | (i << 25)) | (rn << 18)) | (rd << 14));
    *(byte*)buf += 4;
}

void CALLCONV ldrb(void** buf, Condition cond, bool write, bool i, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((((88080384 | cond) | (write << 23)) | (i << 25)) | (rn << 18)) | (rd << 14));
    *(byte*)buf += 4;
}

void CALLCONV ldrbt(void** buf, Condition cond, bool i, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = ((((81788928 | cond) | (i << 25)) | (rn << 17)) | (rd << 13));
    *(byte*)buf += 4;
}

void CALLCONV ldrd(void** buf, Condition cond, bool write, bool i, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((((13312 | cond) | (write << 23)) | (i << 24)) | (rn << 18)) | (rd << 14));
    *(byte*)buf += 4;
}

void CALLCONV ldrex(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((26218399 | cond) | (rn << 16)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV ldrh(void** buf, Condition cond, bool write, bool i, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((((4205568 | cond) | (write << 23)) | (i << 24)) | (rn << 18)) | (rd << 14));
    *(byte*)buf += 4;
}

void CALLCONV ldrsb(void** buf, Condition cond, bool write, bool i, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((((4207616 | cond) | (write << 23)) | (i << 24)) | (rn << 18)) | (rd << 14));
    *(byte*)buf += 4;
}

void CALLCONV ldrsh(void** buf, Condition cond, bool write, bool i, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((((4209664 | cond) | (write << 23)) | (i << 24)) | (rn << 18)) | (rd << 14));
    *(byte*)buf += 4;
}

void CALLCONV ldrt(void** buf, Condition cond, bool i, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = ((((73400320 | cond) | (i << 25)) | (rn << 17)) | (rd << 13));
    *(byte*)buf += 4;
}

void CALLCONV mcr(void** buf, Condition cond, Reg rd) {
    *(uint32_t*)(*buf) = ((234897408 | cond) | (rd << 15));
    *(byte*)buf += 4;
}

void CALLCONV mcrr(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((205520896 | cond) | (rn << 16)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV mla(void** buf, Condition cond, bool s, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = ((((2097296 | cond) | (s << 20)) | (rn << 12)) | (rd << 16));
    *(byte*)buf += 4;
}

void CALLCONV mov(void** buf, Condition cond, bool i, bool s, Reg rd) {
    *(uint32_t*)(*buf) = ((((27262976 | cond) | (i << 25)) | (s << 20)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV mrc(void** buf, Condition cond, Reg rd) {
    *(uint32_t*)(*buf) = ((243286016 | cond) | (rd << 15));
    *(byte*)buf += 4;
}

void CALLCONV mrrc(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((206569472 | cond) | (rn << 16)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV mrs(void** buf, Condition cond, Reg rd) {
    *(uint32_t*)(*buf) = ((17760256 | cond) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV mul(void** buf, Condition cond, bool s, Reg rd) {
    *(uint32_t*)(*buf) = (((144 | cond) | (s << 20)) | (rd << 16));
    *(byte*)buf += 4;
}

void CALLCONV mvn(void** buf, Condition cond, bool i, bool s, Reg rd) {
    *(uint32_t*)(*buf) = ((((31457280 | cond) | (i << 25)) | (s << 20)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV msr_imm(void** buf, Condition cond, FieldMask fieldmask) {
    *(uint32_t*)(*buf) = ((52490240 | cond) | (fieldmask << 16));
    *(byte*)buf += 4;
}

void CALLCONV msr_reg(void** buf, Condition cond, FieldMask fieldmask) {
    *(uint32_t*)(*buf) = ((18935808 | cond) | (fieldmask << 16));
    *(byte*)buf += 4;
}

void CALLCONV pkhbt(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((109051920 | cond) | (rn << 16)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV pkhtb(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((109051984 | cond) | (rn << 16)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV pld(void** buf, bool i, Reg rn) {
    *(uint32_t*)(*buf) = ((4121026560 | (i << 25)) | (rn << 17));
    *(byte*)buf += 4;
}

void CALLCONV qadd(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((16777296 | cond) | (rn << 16)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV qadd16(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((102764304 | cond) | (rn << 16)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV qadd8(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((102764432 | cond) | (rn << 16)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV qaddsubx(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((102764336 | cond) | (rn << 16)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV qdadd(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((20971600 | cond) | (rn << 16)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV qdsub(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((23068752 | cond) | (rn << 16)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV qsub(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((18874448 | cond) | (rn << 16)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV qsub16(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((102764400 | cond) | (rn << 16)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV qsub8(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((102764528 | cond) | (rn << 16)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV qsubaddx(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((102764368 | cond) | (rn << 16)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV rev(void** buf, Condition cond, Reg rd) {
    *(uint32_t*)(*buf) = ((113184560 | cond) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV rev16(void** buf, Condition cond, Reg rd) {
    *(uint32_t*)(*buf) = ((113184688 | cond) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV revsh(void** buf, Condition cond, Reg rd) {
    *(uint32_t*)(*buf) = ((117378992 | cond) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV rfe(void** buf, bool write, Reg rn) {
    *(uint32_t*)(*buf) = ((4164954112 | (write << 23)) | (rn << 18));
    *(byte*)buf += 4;
}

void CALLCONV sadd16(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((101715728 | cond) | (rn << 16)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV sadd8(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((101715856 | cond) | (rn << 16)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV saddsubx(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((101715760 | cond) | (rn << 16)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV sel(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((109055920 | cond) | (rn << 16)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV setendbe(void** buf) {
    *(uint32_t*)(*buf) = 4043375104;
    *(byte*)buf += 4;
}

void CALLCONV setendle(void** buf) {
    *(uint32_t*)(*buf) = 4043374592;
    *(byte*)buf += 4;
}

void CALLCONV shadd16(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((103812880 | cond) | (rn << 16)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV shadd8(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((103813008 | cond) | (rn << 16)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV shaddsubx(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((103812912 | cond) | (rn << 16)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV shsub16(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((103812976 | cond) | (rn << 16)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV shsub8(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((103813104 | cond) | (rn << 16)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV shsubaddx(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((103812944 | cond) | (rn << 16)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV smlabb(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((16777344 | cond) | (rn << 12)) | (rd << 16));
    *(byte*)buf += 4;
}

void CALLCONV smlabt(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((16777376 | cond) | (rn << 12)) | (rd << 16));
    *(byte*)buf += 4;
}

void CALLCONV smlatb(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((16777408 | cond) | (rn << 12)) | (rd << 16));
    *(byte*)buf += 4;
}

void CALLCONV smlatt(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((16777440 | cond) | (rn << 12)) | (rd << 16));
    *(byte*)buf += 4;
}

void CALLCONV smlad(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((117440544 | cond) | (rn << 12)) | (rd << 16));
    *(byte*)buf += 4;
}

void CALLCONV smlal(void** buf, Condition cond, bool s) {
    *(uint32_t*)(*buf) = ((14680208 | cond) | (s << 20));
    *(byte*)buf += 4;
}

void CALLCONV smlalbb(void** buf, Condition cond) {
    *(uint32_t*)(*buf) = (20971648 | cond);
    *(byte*)buf += 4;
}

void CALLCONV smlalbt(void** buf, Condition cond) {
    *(uint32_t*)(*buf) = (20971680 | cond);
    *(byte*)buf += 4;
}

void CALLCONV smlaltb(void** buf, Condition cond) {
    *(uint32_t*)(*buf) = (20971712 | cond);
    *(byte*)buf += 4;
}

void CALLCONV smlaltt(void** buf, Condition cond) {
    *(uint32_t*)(*buf) = (20971744 | cond);
    *(byte*)buf += 4;
}

void CALLCONV smlald(void** buf, Condition cond) {
    *(uint32_t*)(*buf) = (121634848 | cond);
    *(byte*)buf += 4;
}

void CALLCONV smlawb(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((18874496 | cond) | (rn << 12)) | (rd << 16));
    *(byte*)buf += 4;
}

void CALLCONV smlawt(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((18874560 | cond) | (rn << 12)) | (rd << 16));
    *(byte*)buf += 4;
}

void CALLCONV smlsd(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((117440608 | cond) | (rn << 12)) | (rd << 16));
    *(byte*)buf += 4;
}

void CALLCONV smlsld(void** buf, Condition cond) {
    *(uint32_t*)(*buf) = (121634912 | cond);
    *(byte*)buf += 4;
}

void CALLCONV smmla(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((122683408 | cond) | (rn << 12)) | (rd << 16));
    *(byte*)buf += 4;
}

void CALLCONV smmls(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((122683600 | cond) | (rn << 12)) | (rd << 16));
    *(byte*)buf += 4;
}

void CALLCONV smmul(void** buf, Condition cond, Reg rd) {
    *(uint32_t*)(*buf) = ((122744848 | cond) | (rd << 16));
    *(byte*)buf += 4;
}

void CALLCONV smuad(void** buf, Condition cond, Reg rd) {
    *(uint32_t*)(*buf) = ((117501984 | cond) | (rd << 16));
    *(byte*)buf += 4;
}

void CALLCONV smulbb(void** buf, Condition cond, Reg rd) {
    *(uint32_t*)(*buf) = ((23068800 | cond) | (rd << 16));
    *(byte*)buf += 4;
}

void CALLCONV smulbt(void** buf, Condition cond, Reg rd) {
    *(uint32_t*)(*buf) = ((23068832 | cond) | (rd << 16));
    *(byte*)buf += 4;
}

void CALLCONV smultb(void** buf, Condition cond, Reg rd) {
    *(uint32_t*)(*buf) = ((23068864 | cond) | (rd << 16));
    *(byte*)buf += 4;
}

void CALLCONV smultt(void** buf, Condition cond, Reg rd) {
    *(uint32_t*)(*buf) = ((23068896 | cond) | (rd << 16));
    *(byte*)buf += 4;
}

void CALLCONV smull(void** buf, Condition cond, bool s) {
    *(uint32_t*)(*buf) = ((6291528 | cond) | (s << 19));
    *(byte*)buf += 4;
}

void CALLCONV smulwb(void** buf, Condition cond, Reg rd) {
    *(uint32_t*)(*buf) = ((18874528 | cond) | (rd << 16));
    *(byte*)buf += 4;
}

void CALLCONV smulwt(void** buf, Condition cond, Reg rd) {
    *(uint32_t*)(*buf) = ((18874592 | cond) | (rd << 16));
    *(byte*)buf += 4;
}

void CALLCONV smusd(void** buf, Condition cond, Reg rd) {
    *(uint32_t*)(*buf) = ((117502048 | cond) | (rd << 16));
    *(byte*)buf += 4;
}

void CALLCONV srs(void** buf, bool write, Mode mode) {
    *(uint32_t*)(*buf) = ((4180939776 | (write << 23)) | (mode << 1));
    *(byte*)buf += 4;
}

void CALLCONV ssat(void** buf, Condition cond, Reg rd) {
    *(uint32_t*)(*buf) = ((105922560 | cond) | (rd << 16));
    *(byte*)buf += 4;
}

void CALLCONV ssat16(void** buf, Condition cond, Reg rd) {
    *(uint32_t*)(*buf) = ((111211264 | cond) | (rd << 16));
    *(byte*)buf += 4;
}

void CALLCONV ssub16(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((101715824 | cond) | (rn << 16)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV ssub8(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((101715952 | cond) | (rn << 16)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV ssubaddx(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((101715792 | cond) | (rn << 16)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV stc(void** buf, Condition cond, bool write, Reg rn) {
    *(uint32_t*)(*buf) = (((201326592 | cond) | (write << 23)) | (rn << 18));
    *(byte*)buf += 4;
}

void CALLCONV stm1(void** buf, Condition cond, bool write, Reg rn) {
    *(uint32_t*)(*buf) = (((134217728 | cond) | (write << 23)) | (rn << 18));
    *(byte*)buf += 4;
}

void CALLCONV stm2(void** buf, Condition cond, Reg rn) {
    *(uint32_t*)(*buf) = ((150994944 | cond) | (rn << 18));
    *(byte*)buf += 4;
}

void CALLCONV str(void** buf, Condition cond, bool write, bool i, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((((67108864 | cond) | (write << 23)) | (i << 25)) | (rn << 18)) | (rd << 14));
    *(byte*)buf += 4;
}

void CALLCONV strb(void** buf, Condition cond, bool write, bool i, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((((83886080 | cond) | (write << 23)) | (i << 25)) | (rn << 18)) | (rd << 14));
    *(byte*)buf += 4;
}

void CALLCONV strbt(void** buf, Condition cond, bool i, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = ((((79691776 | cond) | (i << 25)) | (rn << 17)) | (rd << 13));
    *(byte*)buf += 4;
}

void CALLCONV strd(void** buf, Condition cond, bool write, bool i, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((((15360 | cond) | (write << 23)) | (i << 24)) | (rn << 18)) | (rd << 14));
    *(byte*)buf += 4;
}

void CALLCONV strex(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((25173792 | cond) | (rn << 17)) | (rd << 13));
    *(byte*)buf += 4;
}

void CALLCONV strh(void** buf, Condition cond, bool write, bool i, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((((11264 | cond) | (write << 23)) | (i << 24)) | (rn << 18)) | (rd << 14));
    *(byte*)buf += 4;
}

void CALLCONV strt(void** buf, Condition cond, bool i, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = ((((71303168 | cond) | (i << 25)) | (rn << 17)) | (rd << 13));
    *(byte*)buf += 4;
}

void CALLCONV swi(void** buf, Condition cond) {
    *(uint32_t*)(*buf) = (251658240 | cond);
    *(byte*)buf += 4;
}

void CALLCONV swp(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((16777360 | cond) | (rn << 16)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV swpb(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((20971664 | cond) | (rn << 16)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV sxtab(void** buf, Condition cond, Reg rn, Reg rd, Rotation rotate) {
    *(uint32_t*)(*buf) = ((((111149168 | cond) | (rn << 16)) | (rd << 12)) | (rotate << 10));
    *(byte*)buf += 4;
}

void CALLCONV sxtab16(void** buf, Condition cond, Reg rn, Reg rd, Rotation rotate) {
    *(uint32_t*)(*buf) = ((((109052016 | cond) | (rn << 16)) | (rd << 12)) | (rotate << 10));
    *(byte*)buf += 4;
}

void CALLCONV sxtah(void** buf, Condition cond, Reg rn, Reg rd, Rotation rotate) {
    *(uint32_t*)(*buf) = ((((112197744 | cond) | (rn << 16)) | (rd << 12)) | (rotate << 10));
    *(byte*)buf += 4;
}

void CALLCONV sxtb(void** buf, Condition cond, Reg rd, Rotation rotate) {
    *(uint32_t*)(*buf) = (((112132208 | cond) | (rd << 12)) | (rotate << 10));
    *(byte*)buf += 4;
}

void CALLCONV sxtb16(void** buf, Condition cond, Reg rd, Rotation rotate) {
    *(uint32_t*)(*buf) = (((110035056 | cond) | (rd << 12)) | (rotate << 10));
    *(byte*)buf += 4;
}

void CALLCONV sxth(void** buf, Condition cond, Reg rd, Rotation rotate) {
    *(uint32_t*)(*buf) = (((113180784 | cond) | (rd << 12)) | (rotate << 10));
    *(byte*)buf += 4;
}

void CALLCONV teq(void** buf, Condition cond, bool i, Reg rn) {
    *(uint32_t*)(*buf) = (((19922944 | cond) | (i << 25)) | (rn << 16));
    *(byte*)buf += 4;
}

void CALLCONV tst(void** buf, Condition cond, bool i, Reg rn) {
    *(uint32_t*)(*buf) = (((17825792 | cond) | (i << 25)) | (rn << 16));
    *(byte*)buf += 4;
}

void CALLCONV uadd16(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((105910032 | cond) | (rn << 16)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV uadd8(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((105910160 | cond) | (rn << 16)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV uaddsubx(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((105910064 | cond) | (rn << 16)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV uhadd16(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((108007184 | cond) | (rn << 16)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV uhadd8(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((108007312 | cond) | (rn << 16)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV uhaddsubx(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((108007216 | cond) | (rn << 16)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV uhsub16(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((108007280 | cond) | (rn << 16)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV uhsub8(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((108007408 | cond) | (rn << 16)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV uhsubaddx(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((108007248 | cond) | (rn << 16)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV umaal(void** buf, Condition cond) {
    *(uint32_t*)(*buf) = (4194448 | cond);
    *(byte*)buf += 4;
}

void CALLCONV umlal(void** buf, Condition cond, bool s) {
    *(uint32_t*)(*buf) = ((10485904 | cond) | (s << 20));
    *(byte*)buf += 4;
}

void CALLCONV umull(void** buf, Condition cond, bool s) {
    *(uint32_t*)(*buf) = ((8388752 | cond) | (s << 20));
    *(byte*)buf += 4;
}

void CALLCONV uqadd16(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((106958608 | cond) | (rn << 16)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV uqadd8(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((106958736 | cond) | (rn << 16)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV uqaddsubx(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((106958640 | cond) | (rn << 16)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV uqsub16(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((106958704 | cond) | (rn << 16)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV uqsub8(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((106958832 | cond) | (rn << 16)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV uqsubaddx(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((106958672 | cond) | (rn << 16)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV usad8(void** buf, Condition cond, Reg rd) {
    *(uint32_t*)(*buf) = ((125890576 | cond) | (rd << 16));
    *(byte*)buf += 4;
}

void CALLCONV usada8(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((125829136 | cond) | (rn << 12)) | (rd << 16));
    *(byte*)buf += 4;
}

void CALLCONV usat(void** buf, Condition cond, Reg rd) {
    *(uint32_t*)(*buf) = ((115376128 | cond) | (rd << 17));
    *(byte*)buf += 4;
}

void CALLCONV usat16(void** buf, Condition cond, Reg rd) {
    *(uint32_t*)(*buf) = ((115405568 | cond) | (rd << 16));
    *(byte*)buf += 4;
}

void CALLCONV usub16(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((105910128 | cond) | (rn << 16)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV usub8(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((105910256 | cond) | (rn << 16)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV usubaddx(void** buf, Condition cond, Reg rn, Reg rd) {
    *(uint32_t*)(*buf) = (((105910096 | cond) | (rn << 16)) | (rd << 12));
    *(byte*)buf += 4;
}

void CALLCONV uxtab(void** buf, Condition cond, Reg rn, Reg rd, Rotation rotate) {
    *(uint32_t*)(*buf) = ((((115343472 | cond) | (rn << 16)) | (rd << 12)) | (rotate << 10));
    *(byte*)buf += 4;
}

void CALLCONV uxtab16(void** buf, Condition cond, Reg rn, Reg rd, Rotation rotate) {
    *(uint32_t*)(*buf) = ((((113246320 | cond) | (rn << 16)) | (rd << 12)) | (rotate << 10));
    *(byte*)buf += 4;
}

void CALLCONV uxtah(void** buf, Condition cond, Reg rn, Reg rd, Rotation rotate) {
    *(uint32_t*)(*buf) = ((((116392048 | cond) | (rn << 16)) | (rd << 12)) | (rotate << 10));
    *(byte*)buf += 4;
}

void CALLCONV uxtb(void** buf, Condition cond, Reg rd, Rotation rotate) {
    *(uint32_t*)(*buf) = (((116326512 | cond) | (rd << 12)) | (rotate << 10));
    *(byte*)buf += 4;
}

void CALLCONV uxtb16(void** buf, Condition cond, Reg rd, Rotation rotate) {
    *(uint32_t*)(*buf) = (((114229360 | cond) | (rd << 12)) | (rotate << 10));
    *(byte*)buf += 4;
}

void CALLCONV uxth(void** buf, Condition cond, Reg rd, Rotation rotate) {
    *(uint32_t*)(*buf) = (((117375088 | cond) | (rd << 12)) | (rotate << 10));
    *(byte*)buf += 4;
}


#define r0 0x0
#define r1 0x1
#define r2 0x2
#define r3 0x3
#define r4 0x4
#define r5 0x5
#define r6 0x6
#define r7 0x7
#define r8 0x8
#define r9 0x9
#define r10 0xa
#define r11 0xb
#define r12 0xc
#define r13 0xd
#define r14 0xe
#define r15 0xf
#define a1 0x0
#define a2 0x1
#define a3 0x2
#define a4 0x3
#define v1 0x4
#define v2 0x5
#define v3 0x6
#define v4 0x7
#define v5 0x8
#define v6 0x9
#define v7 0xa
#define v8 0xb
#define ip 0xc
#define sp 0xd
#define lr 0xe
#define pc 0xf
#define wr 0x7
#define sb 0x9
#define sl 0xa
#define fp 0xb
